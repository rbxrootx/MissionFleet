// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B0C30 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_100b0c30_100B0C30() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, 0fffdh
        push edi
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes A1 14 57 1C 10: mov eax, dword ptr [0x101c5714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [esp + 0ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes E8 AA A0 04 00: call 0x100fad00
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax + 0e8h], -1
        ; Exact mapped bytes 75 05: jne 0x100b0c64
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 09: jmp 0x100b0c6d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [eax + 60h]
        shr eax, 0ch
        and eax, 0fh
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 10h]
        push ecx
        mov ecx, dword ptr [esi + 0a0h]
        push edx
        push edi
        push eax
        ; Exact mapped bytes E8 1C 3F FF FF: call 0x100a4ba0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a0h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
