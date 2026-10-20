// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043543D .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_0043543d_0043543D() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 18h]
        cmp ebx, edi
        ; Exact mapped bytes 76 43: jbe 0x435490
        __asm _emit 0x76
        __asm _emit 0x43
        cmp dword ptr [esi + 10h], 0
        ; Exact mapped bytes 75 05: jne 0x435458
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 C9 78 FF FF: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, ebx
        ; Exact mapped bytes 73 09: jae 0x435465
        __asm _emit 0x73
        __asm _emit 0x09
        mov eax, dword ptr [esi + 10h]
        add edi, eax
        cmp edi, ebx
        ; Exact mapped bytes 72 FA: jb 0x43545f
        __asm _emit 0x72
        __asm _emit 0xfa
        mov eax, dword ptr [esi + 20h]
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x435476
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        ; Exact mapped bytes EB 09: jmp 0x43547f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [esi]
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 75 05: jne 0x43548a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 97 78 FF FF: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 20h], ebx
        mov dword ptr [esi + 18h], edi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
