// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F98C .. +0x2AD bytes.
extern "C" __declspec(naked) void FUN_5883f98c_5883F98C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x5883f99e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 95 02 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 1E: jne 0x5883f9c2
        __asm _emit 0x75
        __asm _emit 0x1e
        push 20h
        push 588f2d40h
        ; Exact mapped bytes E8 A3 C9 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 16 72 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 71 02 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 1E: jne 0x5883f9e6
        __asm _emit 0x75
        __asm _emit 0x1e
        push 20h
        push 588f2d54h
        ; Exact mapped bytes E8 7F C9 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F2 71 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 4D 02 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 75 1E: jne 0x5883fa0a
        __asm _emit 0x75
        __asm _emit 0x1e
        push 20h
        push 588f2d68h
        ; Exact mapped bytes E8 5B C9 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CE 71 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 29 02 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 75 1E: jne 0x5883fa2e
        __asm _emit 0x75
        __asm _emit 0x1e
        push 20h
        push 588f2d7ch
        ; Exact mapped bytes E8 37 C9 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AA 71 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 05 02 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 5
        ; Exact mapped bytes 75 1E: jne 0x5883fa52
        __asm _emit 0x75
        __asm _emit 0x1e
        push 20h
        push 588f2d90h
        ; Exact mapped bytes E8 13 C9 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 86 71 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 E1 01 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 6
        ; Exact mapped bytes 75 1E: jne 0x5883fa76
        __asm _emit 0x75
        __asm _emit 0x1e
        push 20h
        push 588f2da4h
        ; Exact mapped bytes E8 EF C8 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 62 71 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 BD 01 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 7
        ; Exact mapped bytes 75 1E: jne 0x5883fa9a
        __asm _emit 0x75
        __asm _emit 0x1e
        push 20h
        push 588f2db8h
        ; Exact mapped bytes E8 CB C8 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3E 71 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 99 01 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 75 1E: jne 0x5883fabe
        __asm _emit 0x75
        __asm _emit 0x1e
        push 20h
        push 588f2dcch
        ; Exact mapped bytes E8 A7 C8 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1A 71 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 75 01 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 9
        ; Exact mapped bytes 75 1E: jne 0x5883fae2
        __asm _emit 0x75
        __asm _emit 0x1e
        push 20h
        push 588f2de4h
        ; Exact mapped bytes E8 83 C8 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F6 70 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 51 01 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0ah
        ; Exact mapped bytes 75 1E: jne 0x5883fb06
        __asm _emit 0x75
        __asm _emit 0x1e
        push 20h
        push 588f2df8h
        ; Exact mapped bytes E8 5F C8 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D2 70 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 2D 01 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0bh
        ; Exact mapped bytes 75 1E: jne 0x5883fb2a
        __asm _emit 0x75
        __asm _emit 0x1e
        push 20h
        push 588f2e10h
        ; Exact mapped bytes E8 3B C8 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AE 70 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0ch
        ; Exact mapped bytes 75 1E: jne 0x5883fb4e
        __asm _emit 0x75
        __asm _emit 0x1e
        push 20h
        push 588f2e2ch
        ; Exact mapped bytes E8 17 C8 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8A 70 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0dh
        ; Exact mapped bytes 75 1E: jne 0x5883fb72
        __asm _emit 0x75
        __asm _emit 0x1e
        push 20h
        push 588f2e48h
        ; Exact mapped bytes E8 F3 C7 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 66 70 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0eh
        ; Exact mapped bytes 75 1E: jne 0x5883fb96
        __asm _emit 0x75
        __asm _emit 0x1e
        push 20h
        push 588f2e60h
        ; Exact mapped bytes E8 CF C7 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 42 70 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x5883fc33
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 10h
        ; Exact mapped bytes 75 1B: jne 0x5883fbb7
        __asm _emit 0x75
        __asm _emit 0x1b
        push 20h
        push 588f2e78h
        ; Exact mapped bytes E8 AB C7 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1E 70 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 7C: jmp 0x5883fc33
        __asm _emit 0xeb
        __asm _emit 0x7c
        cmp dword ptr [ebp + 8], 11h
        ; Exact mapped bytes 75 1B: jne 0x5883fbd8
        __asm _emit 0x75
        __asm _emit 0x1b
        push 20h
        push 588f2e90h
        ; Exact mapped bytes E8 8A C7 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 FD 6F 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 5B: jmp 0x5883fc33
        __asm _emit 0xeb
        __asm _emit 0x5b
        cmp dword ptr [ebp + 8], 12h
        ; Exact mapped bytes 75 1B: jne 0x5883fbf9
        __asm _emit 0x75
        __asm _emit 0x1b
        push 16h
        push 588f2ea8h
        ; Exact mapped bytes E8 69 C7 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DC 6F 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 3A: jmp 0x5883fc33
        __asm _emit 0xeb
        __asm _emit 0x3a
        cmp dword ptr [ebp + 8], 13h
        ; Exact mapped bytes 75 1B: jne 0x5883fc1a
        __asm _emit 0x75
        __asm _emit 0x1b
        push 18h
        push 588f2ec4h
        ; Exact mapped bytes E8 48 C7 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BB 6F 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 19: jmp 0x5883fc33
        __asm _emit 0xeb
        __asm _emit 0x19
        push 20h
        push 588f2ee4h
        ; Exact mapped bytes E8 2D C7 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A0 6F 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
