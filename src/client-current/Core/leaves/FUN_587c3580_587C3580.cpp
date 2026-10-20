// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3580 .. +0x23A bytes.
extern "C" __declspec(naked) void FUN_587c3580_587C3580() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 218h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20ch], ecx
        mov eax, dword ptr [ebp - 20ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 0F 84 FF 01 00 00: je 0x587c37a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        lea ecx, [ebp - 204h]
        push ecx
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        push 0
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 20ch]
        add eax, 2ch
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        lea edx, [ebp - 204h]
        push edx
        mov eax, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 20ch]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx + 38h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 218h], eax
        cmp dword ptr [ebp - 218h], 0
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x587c36d2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 214h], 0
        mov eax, dword ptr [ebp - 218h]
        mov dword ptr [ebp - 210h], eax
        cmp dword ptr [ebp - 210h], 80040240h
        ; Exact mapped bytes 7F 32: jg 0x587c365f
        __asm _emit 0x7f
        __asm _emit 0x32
        cmp dword ptr [ebp - 210h], 80040240h
        ; Exact mapped bytes 74 7C: je 0x587c36b5
        __asm _emit 0x74
        __asm _emit 0x7c
        cmp dword ptr [ebp - 210h], 80004002h
        ; Exact mapped bytes 74 34: je 0x587c3679
        __asm _emit 0x74
        __asm _emit 0x34
        cmp dword ptr [ebp - 210h], 80004003h
        ; Exact mapped bytes 74 40: je 0x587c3691
        __asm _emit 0x74
        __asm _emit 0x40
        cmp dword ptr [ebp - 210h], 80040216h
        ; Exact mapped bytes 74 4C: je 0x587c36a9
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes EB 62: jmp 0x587c36c1
        __asm _emit 0xeb
        __asm _emit 0x62
        cmp dword ptr [ebp - 210h], 80040241h
        ; Exact mapped bytes 74 32: je 0x587c369d
        __asm _emit 0x74
        __asm _emit 0x32
        cmp dword ptr [ebp - 210h], 8007000eh
        ; Exact mapped bytes 74 0E: je 0x587c3685
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes EB 48: jmp 0x587c36c1
        __asm _emit 0xeb
        __asm _emit 0x48
        mov dword ptr [ebp - 214h], 588be38ch
        ; Exact mapped bytes EB 46: jmp 0x587c36cb
        __asm _emit 0xeb
        __asm _emit 0x46
        mov dword ptr [ebp - 214h], 588be39ch
        ; Exact mapped bytes EB 3A: jmp 0x587c36cb
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov dword ptr [ebp - 214h], 588be3ach
        ; Exact mapped bytes EB 2E: jmp 0x587c36cb
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov dword ptr [ebp - 214h], 588be3b8h
        ; Exact mapped bytes EB 22: jmp 0x587c36cb
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 214h], 588be3d8h
        ; Exact mapped bytes EB 16: jmp 0x587c36cb
        __asm _emit 0xeb
        __asm _emit 0x16
        mov dword ptr [ebp - 214h], 588be3e8h
        ; Exact mapped bytes EB 0A: jmp 0x587c36cb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 214h], 588be38ch
        xor eax, eax
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x587c37aa
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 208h]
        push ecx
        push 588be400h
        mov edx, dword ptr [ebp - 20ch]
        mov eax, dword ptr [edx + 2ch]
        mov ecx, dword ptr [ebp - 20ch]
        mov edx, dword ptr [ecx + 2ch]
        mov eax, dword ptr [eax]
        push edx
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x587c372a
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp dword ptr [ebp - 208h], 0
        ; Exact mapped bytes 74 1E: je 0x587c3723
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 208h]
        push ecx
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 208h], 0
        xor eax, eax
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x587c37aa
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        push eax
        mov ecx, dword ptr [ebp - 20ch]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 30h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x587c377a
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp dword ptr [ebp - 208h], 0
        ; Exact mapped bytes 74 1E: je 0x587c3776
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 208h]
        push eax
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        mov dword ptr [ebp - 208h], 0
        xor eax, eax
        ; Exact mapped bytes EB 30: jmp 0x587c37aa
        __asm _emit 0xeb
        __asm _emit 0x30
        cmp dword ptr [ebp - 208h], 0
        ; Exact mapped bytes 74 1E: je 0x587c37a1
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 208h]
        push ecx
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 208h], 0
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x587c37aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 9C D8 06 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
