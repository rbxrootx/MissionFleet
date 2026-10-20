// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F06CC .. +0x5C bytes.
extern "C" __declspec(naked) void _PostModal_CDialog__IAEXXZ_004F06CC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 47 1D 00 00: call 0x4f2421
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 45 14 00 00: call 0x4f1b27
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4f0702
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 54h]
        push eax
        ; Exact mapped bytes FF 15 84 26 5E 00: call dword ptr [0x5e2684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 54h], 0
        ; Exact mapped bytes E8 EF 4D 04 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x4f0724
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC CE 01 00: call 0x50d620
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
