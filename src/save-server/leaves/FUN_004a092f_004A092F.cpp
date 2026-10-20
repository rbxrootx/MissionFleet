// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A092F .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_004a092f_004A092F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 07: jge 0x4a0946
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6B 43 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7E 53: jle 0x4a09ad
        __asm _emit 0x7e
        __asm _emit 0x53
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 4B: jge 0x4a09ad
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8D BE 02 00: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        sub eax, edx
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 67 49 FC FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov esi, dword ptr [ebp - 4]
        sub esi, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0F 43 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [eax + 4], esi
        mov eax, dword ptr [ebp - 4]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
