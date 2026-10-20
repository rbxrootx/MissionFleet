// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005568FE .. +0x45 bytes.
extern "C" __declspec(naked) void _IsInPlaceActive_COleClientItem__QBEHXZ_005568FE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        push 136h
        push 67c1ech
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 46 39 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x39
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4ch], 3
        ; Exact mapped bytes 74 12: je 0x556935
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4ch], 4
        ; Exact mapped bytes 74 09: je 0x556935
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 07: jmp 0x55693c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
