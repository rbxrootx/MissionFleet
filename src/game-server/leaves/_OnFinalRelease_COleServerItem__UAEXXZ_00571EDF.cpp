// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571EDF .. +0xA1 bytes.
extern "C" __declspec(naked) void _OnFinalRelease_COleServerItem__UAEXXZ_00571EDF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        push 355h
        push 5d0930h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 65 92 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 18 E2 FF FF: call 0x57011b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 358h
        push 5d0930h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 47 92 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C3 A5 FD FF: call 0x54c4e4
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 28h], 0
        ; Exact mapped bytes 74 16: je 0x571f40
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C 4A FF FF: call 0x566982
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 28h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 74 2B: je 0x571f74
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x571f6d
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x571f74
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B A0 FD FF: call 0x54bf97
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
