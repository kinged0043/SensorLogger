# Ultra-Low-Power Environmental Logger

A battery-powered logger that measures temperature, humidity, pressure and light, stores timestamped readings, and runs for as long as possible on a small battery.

> Status: planning
> Author: Ed

## Goals

- [ ] Log temperature, humidity, pressure and light at a fixed interval
- [ ] Timestamp every reading (RTC with its own backup)
- [ ] Store data on removable storage
- [ ] Meet a target battery life (set the number: ____ months on ____ mAh)
- [ ] Custom PCB designed in KiCad

## Requirements (fill in)

| Item | My target |
|---|---|
| Sample interval | |
| Average current budget | |
| Sleep current target | |
| Battery type / capacity | |
| Operating temperature range | |
| Storage capacity needed | |

## Design decisions (fill in as you decide, with the reason)

| Decision | Choice | Why |
|---|---|---|
| Microcontroller | | |
| Power source and regulation | | |
| Sensors | | |
| Timekeeping | | |
| Storage | | |
| Battery monitoring | | |

## Milestones

1. [ ] Write the current budget on paper (sleep vs active, duty cycle, resulting battery life)
2. [ ] Choose parts against that budget
3. [ ] Breadboard one sensor and read it
4. [ ] Measure sleep current of the bare MCU
5. [ ] Add power gating for the sensors and re-measure
6. [ ] Add timestamps and storage
7. [ ] Add battery voltage monitoring
8. [ ] Draw the schematic in KiCad and run ERC
9. [ ] Lay out the PCB and run DRC
10. [ ] Build, measure real current, compare with the budget

## Repository layout (suggested, change freely)

```
/docs        notes, datasheets links, current budget
/firmware    source code
/hardware    KiCad project
/data        sample logs
```

## Measurements log

| Date | What I measured | Result | Matches budget? |
|---|---|---|---|
| | | | |

## References

- Datasheets for chosen parts (add links)
- KiCad documentation
- Notes on lessons learned (add as you go)

## License

TBD