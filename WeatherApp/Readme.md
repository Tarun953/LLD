Weather APP implementation using Observer Pattern

WeatherObservable Interface              has-A (1-N)                       DisplayInterface

Weather(Concrete Weather Observable Class) IS-A WeatherObservable
TVDisplay, MobileDisplay, ComputerDisplay (Display Interface Concrete Class) IS-A Display (Observer)