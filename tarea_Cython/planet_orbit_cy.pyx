from math import sqrt

cdef class  Planet(object):
  cdef public double x,y,z,vx,vy,vz,m
  def __init__(self):  
    self.x = 1.0
    self.y = 0.0
    self.z = 0.0
    self.vx=0.0
    self.vy= 0.5
    self.vz = 0.0
    self.m =1.0

cdef void single_step(Planet planet, double dt):
    cdef double distance,Fx,Fy,Fz
    distance =sqrt(planet.x**2 + planet.y**2 + planet.x**2)    
    
    Fx = -planet.x/distance**3
    Fy = -planet.y/distance**3
    Fz = -planet.z/distance**3

    planet.x +=dt*planet.vx
    planet.y += dt*planet.vy
    planet.z += dt*planet.vz

    planet.vx += dt * Fx/planet.m
    planet.vy += dt * Fy/planet.m
    planet.vz += dt * Fz/planet.m

cdef  void step_time(Planet planet, double time_span, int n_steps):   

    dt = time_span / n_steps
    cdef int j
    for j in range(n_steps):
        single_step(planet,dt)
    

def main():   
 miPlanet = Planet()
 step_time(miPlanet,5000,1000000)

