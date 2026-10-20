// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409B5A .. +0x3DD bytes.
extern "C" __declspec(naked) void FUN_00409b5a_00409B5A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439d31h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 42ch
        mov dword ptr [ebp - 430h], ecx
        mov ecx, dword ptr [ebp - 430h]
        ; Exact mapped bytes E8 B9 50 02 00: call 0x42ec42
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 430h]
        ; Exact mapped bytes E8 3A 13 00 00: call 0x40aed0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 69: je 0x409c08
        __asm _emit 0x74
        __asm _emit 0x69
        lea ecx, [ebp - 41ch]
        ; Exact mapped bytes E8 06 A7 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 65h
        lea ecx, [ebp - 41ch]
        ; Exact mapped bytes E8 BF 89 02 00: call 0x43257d
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 41ch]
        ; Exact mapped bytes E8 17 12 00 00: call 0x40ade0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x409bf6
        __asm _emit 0x75
        __asm _emit 0x29
        push 0
        push 0
        push 800h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C2 12 00 00: call 0x40aea0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 41ch]
        ; Exact mapped bytes E8 27 A7 FF FF: call 0x404310
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 10h
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AA 12 00 00: call 0x40aea0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 41ch]
        ; Exact mapped bytes E8 A3 3F 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 430h]
        mov ecx, dword ptr [eax + 17ch]
        push ecx
        mov ecx, dword ptr [ebp - 430h]
        ; Exact mapped bytes E8 4E 13 00 00: call 0x40af70
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 430h]
        mov eax, dword ptr [edx + 17ch]
        push eax
        mov ecx, dword ptr [ebp - 430h]
        ; Exact mapped bytes E8 34 13 00 00: call 0x40af70
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 32h
        push 2
        push 44932ch
        push 0
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 124h
        ; Exact mapped bytes E8 61 31 02 00: call 0x42cdbb
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        push 1
        push 32h
        push 2
        push 449330h
        push 1
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 124h
        ; Exact mapped bytes E8 43 31 02 00: call 0x42cdbb
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        push 2
        push 96h
        push 2
        push 449338h
        push 2
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 124h
        ; Exact mapped bytes E8 22 31 02 00: call 0x42cdbb
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        push 3
        push 50h
        push 2
        push 449344h
        push 3
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 124h
        ; Exact mapped bytes E8 04 31 02 00: call 0x42cdbb
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        push 4
        push 50h
        push 2
        push 44934ch
        push 4
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 124h
        ; Exact mapped bytes E8 E6 30 02 00: call 0x42cdbb
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        push 5
        push 50h
        push 2
        push 449354h
        push 5
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 124h
        ; Exact mapped bytes E8 C8 30 02 00: call 0x42cdbb
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        push 6
        push 50h
        push 2
        push 44935ch
        push 6
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 124h
        ; Exact mapped bytes E8 AA 30 02 00: call 0x42cdbb
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        push 7
        push 50h
        push 2
        push 449368h
        push 7
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 124h
        ; Exact mapped bytes E8 8C 30 02 00: call 0x42cdbb
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        push 8
        push 96h
        push 2
        push 449374h
        push 8
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 124h
        ; Exact mapped bytes E8 6B 30 02 00: call 0x42cdbb
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        push 9
        push 96h
        push 2
        push 44937ch
        push 9
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 124h
        ; Exact mapped bytes E8 4A 30 02 00: call 0x42cdbb
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        push 0ah
        push 12ch
        push 2
        push 449384h
        push 0ah
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 124h
        ; Exact mapped bytes E8 29 30 02 00: call 0x42cdbb
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        push 0bh
        push 12ch
        push 2
        push 449390h
        push 0bh
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 124h
        ; Exact mapped bytes E8 08 30 02 00: call 0x42cdbb
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        push 179h
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 124h
        ; Exact mapped bytes E8 37 14 00 00: call 0x40b200
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 418h]
        push ecx
        ; Exact mapped bytes E8 4D 2E 02 00: call 0x42cc22
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        lea edx, [ebp - 414h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 38 C2 43 00: call dword ptr [0x43c238]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x409e19
        __asm _emit 0x74
        __asm _emit 0x28
        lea ecx, [ebp - 414h]
        push ecx
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 74h
        ; Exact mapped bytes E8 2E 3F 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        push 44939ch
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 74h
        ; Exact mapped bytes E8 08 41 02 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        push 144h
        ; Exact mapped bytes E8 C9 3A 02 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 424h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 424h], 0
        ; Exact mapped bytes 74 18: je 0x409e54
        __asm _emit 0x74
        __asm _emit 0x18
        push 4493b0h
        mov ecx, dword ptr [ebp - 424h]
        ; Exact mapped bytes E8 14 A7 FF FF: call 0x404560
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 434h], eax
        ; Exact mapped bytes EB 0A: jmp 0x409e5e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 434h], 0
        mov edx, dword ptr [ebp - 434h]
        mov dword ptr [ebp - 420h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 430h]
        mov ecx, dword ptr [ebp - 420h]
        mov dword ptr [eax + 11ch], ecx
        push 144h
        ; Exact mapped bytes E8 5F 3A 02 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 42ch], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 42ch], 0
        ; Exact mapped bytes 74 18: je 0x409ebe
        __asm _emit 0x74
        __asm _emit 0x18
        push 4493c4h
        mov ecx, dword ptr [ebp - 42ch]
        ; Exact mapped bytes E8 DA C3 FF FF: call 0x406290
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 438h], eax
        ; Exact mapped bytes EB 0A: jmp 0x409ec8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 438h], 0
        mov edx, dword ptr [ebp - 438h]
        mov dword ptr [ebp - 428h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 430h]
        mov ecx, dword ptr [ebp - 428h]
        mov dword ptr [eax + 120h], ecx
        mov ecx, dword ptr [ebp - 430h]
        ; Exact mapped bytes E8 4F 02 00 00: call 0x40a147
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 1388h
        push 1
        mov ecx, dword ptr [ebp - 430h]
        ; Exact mapped bytes E8 34 10 00 00: call 0x40af40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes FF 15 84 C5 43 00: call dword ptr [0x43c584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push 4493dch
        mov ecx, dword ptr [ebp - 430h]
        ; Exact mapped bytes E8 02 43 02 00: call 0x42e226
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
