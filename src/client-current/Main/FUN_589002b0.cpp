// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589002B0 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_589002b0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes A8 02: test al, 2
        __asm _emit 0xa8
        __asm _emit 0x02
        ; Exact mapped bytes 74 71: je 0x5890032d
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 8B 41 60: mov eax, dword ptr [ecx + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x60
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 42 28: mov eax, dword ptr [edx + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x28
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 3C 01: cmp al, 1
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 74 23: je 0x589002f1
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 4E 78: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x78
        ; Exact mapped bytes 8B 41 60: mov eax, dword ptr [ecx + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x60
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 42 28: mov eax, dword ptr [edx + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x28
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 3C 01: cmp al, 1
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 74 11: je 0x589002f1
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 0B: jmp 0x589002fc
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 46 3C: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x3c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2A: je 0x5890032d
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 40 34: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x34
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1C: je 0x58900326
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 7C 24 0C: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 42 10: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x10
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4E 3C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x3c
        ; Exact mapped bytes 3B 41 34: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x34
        ; Exact mapped bytes 74 0B: je 0x5890032d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 EA: jne 0x58900310
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
