// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00518FA3 .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_00518fa3_00518FA3() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57dc37h
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
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 28h], 0ffffffffh
        mov eax, dword ptr [ebp - 3ch]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 20: je 0x518ff7
        __asm _emit 0x74
        __asm _emit 0x20
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes E8 F4 2E FD FF: call 0x4ebee1
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x2e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x518ff7
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], -1
        ; Exact mapped bytes 0F 85 1B 01 00 00: jne 0x51911c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        cmp dword ptr [edx + 98h], 0
        ; Exact mapped bytes 75 50: jne 0x51905d
        __asm _emit 0x75
        __asm _emit 0x50
        push 460h
        push 5c8c2ch
        push 1ch
        ; Exact mapped bytes E8 41 40 FD FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 0F: je 0x51903d
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0ah
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D8 29 FD FF: call 0x4eba10
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x519044
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 98h], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 AA 44 FB FF: call 0x4cd521
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x44
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 24 7F 01 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 0
        push 41ch
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], -1
        ; Exact mapped bytes 75 1E: jne 0x5190c3
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 91 47 FD FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x519147
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes E8 07 A8 01 00: call 0x5338e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes E8 F2 2D FD FF: call 0x4ebee1
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x519107
        __asm _emit 0x75
        __asm _emit 0x14
        push 46ah
        push 5c8c2ch
        ; Exact mapped bytes E8 FE B8 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519107
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CC: jne 0x5190d9
        __asm _emit 0x75
        __asm _emit 0xcc
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 30 47 FD FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 93 E5 FF FF: call 0x5176bf
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 E0 E5 FF FF: call 0x517722
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
