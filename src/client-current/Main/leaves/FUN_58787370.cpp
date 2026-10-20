// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58787370 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_58787370() {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 914h], 0
        ; Exact mapped bytes 74 71: je 0x587873f0
        __asm _emit 0x74
        __asm _emit 0x71
        cmp dword ptr [esi + 910h], 0
        ; Exact mapped bytes 74 68: je 0x587873f0
        __asm _emit 0x74
        __asm _emit 0x68
        mov ecx, dword ptr [esi + 914h]
        push edi
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edi + 4]
        imul eax, eax, 3e8h
        cdq
        idiv dword ptr [ecx + 114h]
        add eax, dword ptr [ecx + 50h]
        mov dword ptr [esp + 8], eax
        mov eax, dword ptr [edi + 8]
        imul eax, eax, 3e8h
        cdq
        idiv dword ptr [ecx + 114h]
        xor edi, edi
        add eax, dword ptr [ecx + 54h]
        cmp byte ptr [esi + 88ch], 0
        mov dword ptr [esp + 0ch], eax
        ; Exact mapped bytes 76 21: jbe 0x587873ef
        __asm _emit 0x76
        __asm _emit 0x21
        mov edi, edi
        mov ecx, dword ptr [esi + 910h]
        mov ecx, dword ptr [ecx + edi*4]
        lea eax, [esp + 8]
        push eax
        ; Exact mapped bytes E8 5D 8B FF FF: call 0x5877ff40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [esi + 88ch]
        inc edi
        cmp edi, edx
        ; Exact mapped bytes 7C E1: jl 0x587873d0
        __asm _emit 0x7c
        __asm _emit 0xe1
        pop edi
        pop esi
        add esp, 8
        ret
    }
}
