// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F1470 .. +0x269 bytes.
extern "C" __declspec(naked) void FUN_584f1470_584F1470() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4b0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 490h], ecx
        mov eax, dword ptr [ebp - 490h]
        mov dword ptr [eax], 588a2790h
        mov ecx, dword ptr [ebp - 490h]
        mov dword ptr [ecx + 4], 0
        mov dword ptr [ebp - 494h], 0
        mov dword ptr [ebp - 4a0h], 0
        mov dword ptr [ebp - 49ch], 400h
        mov dword ptr [ebp - 4ach], 0
        push 400h
        push 0
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes E8 33 B9 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb9
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 494h], 588a271ch
        lea eax, [ebp - 498h]
        push eax
        push 0f003fh
        push 0
        mov ecx, dword ptr [ebp - 494h]
        push ecx
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 A5 01 00 00: jne 0x584f16b7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 49ch]
        push edx
        lea eax, [ebp - 404h]
        push eax
        lea ecx, [ebp - 4a0h]
        push ecx
        push 0
        push 588a2740h
        mov edx, dword ptr [ebp - 498h]
        push edx
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 74 01 00 00: jne 0x584f16b7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 400h
        ; Exact mapped bytes E8 F5 FA 33 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xfa
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4a4h], eax
        mov eax, dword ptr [ebp - 490h]
        mov ecx, dword ptr [ebp - 4a4h]
        mov dword ptr [eax + 4], ecx
        push 400h
        push 0
        mov edx, dword ptr [ebp - 490h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 95 B8 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 404h]
        push ecx
        push 400h
        mov edx, dword ptr [ebp - 490h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 E7 2B 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x2b
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 490h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 D5 FB 35 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfb
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        cmp eax, 3b6h
        ; Exact mapped bytes 0F 83 C5 00 00 00: jae 0x584f167e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a2748h
        push 400h
        mov eax, dword ptr [ebp - 490h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 9E 4F F9 FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x4f
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp - 490h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 7C 42 89 58: call dword ptr [0x5889427c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 588a2754h
        push 400h
        mov ecx, dword ptr [ebp - 490h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 73 4F F9 FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x4f
        __asm _emit 0xf9
        __asm _emit 0xff
        push 588a2758h
        push 400h
        mov eax, dword ptr [ebp - 490h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 5A 4F F9 FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x4f
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp - 490h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 7C 42 89 58: call dword ptr [0x5889427c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 588a2764h
        push 400h
        mov ecx, dword ptr [ebp - 490h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 2F 4F F9 FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x4f
        __asm _emit 0xf9
        __asm _emit 0xff
        push 588a2768h
        push 400h
        mov eax, dword ptr [ebp - 490h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 16 4F F9 FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4f
        __asm _emit 0xf9
        __asm _emit 0xff
        push 200h
        lea edx, [ebp - 48ch]
        push edx
        mov eax, dword ptr [ebp - 490h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 34 42 89 58: call dword ptr [0x58894234]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4b0h], eax
        ; Exact mapped bytes EB 39: jmp 0x584f16b7
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 490h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 2D: je 0x584f16b7
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 490h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4a8h], ecx
        push 1
        mov edx, dword ptr [ebp - 4a8h]
        push edx
        ; Exact mapped bytes E8 8D F9 33 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 490h]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 498h]
        push ecx
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 490h]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 7B F9 33 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf9
        __asm _emit 0x33
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
