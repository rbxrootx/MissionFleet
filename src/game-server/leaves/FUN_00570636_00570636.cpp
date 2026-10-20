// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570636 .. +0x133 bytes.
extern "C" __declspec(naked) void FUN_00570636_00570636() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58017ch
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
        sub esp, 8
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 58b044h
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 2ch], 0
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 74 1C: je 0x570693
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 34h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x57066e
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 74 1C: je 0x5706be
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 38h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 38h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x570699
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 31 BD FD FF: call 0x54c3fd
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 47 FA FF FF: call 0x57011b
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 4C: je 0x570729
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 28h], 0
        ; Exact mapped bytes 74 16: je 0x5706fc
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 90 62 FF FF: call 0x566982
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 28h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0bch]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 0D: jne 0x570717
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0bch], 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 55 DB FB FF: call 0x52e283
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xdb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 3ch
        ; Exact mapped bytes E8 B3 28 00 00: call 0x572ff0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 30h
        ; Exact mapped bytes E8 00 D1 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 06 1F FE FF: call 0x552661
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
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
