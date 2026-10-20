// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007CED0 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_1007ced0_1007CED0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 194h]
        cmp eax, 3
        ; Exact mapped bytes 77 3F: ja 0x1007cf1d
        __asm _emit 0x77
        __asm _emit 0x3f
        ; Exact mapped bytes FF 24 85 54 CF 07 10: jmp dword ptr [eax*4 + 0x1007cf54]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xcf
        __asm _emit 0x07
        __asm _emit 0x10
        mov eax, dword ptr [esi + 198h]
        mov eax, dword ptr [eax + 0b5ch]
        ; Exact mapped bytes EB 2C: jmp 0x1007cf1f
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [esi + 198h]
        mov eax, dword ptr [ecx + 0b60h]
        ; Exact mapped bytes EB 1E: jmp 0x1007cf1f
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [esi + 198h]
        mov eax, dword ptr [edx + 0b68h]
        ; Exact mapped bytes EB 10: jmp 0x1007cf1f
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [esi + 198h]
        mov eax, dword ptr [eax + 0b64h]
        ; Exact mapped bytes EB 02: jmp 0x1007cf1f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 0ch]
        push eax
        ; Exact mapped bytes 66 8B 86 94 01 00 00: mov ax, word ptr [esi + 0x194]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 0ffffh
        push ecx
        mov ecx, dword ptr [esi + 174h]
        push edx
        push eax
        ; Exact mapped bytes E8 AD 0B 00 00: call 0x1007daf0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 174h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
