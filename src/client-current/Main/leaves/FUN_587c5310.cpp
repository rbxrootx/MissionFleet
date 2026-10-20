// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5310 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_587c5310() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        or eax, 0ffffffffh
        mov esi, ecx
        sub eax, dword ptr [esi + 14h]
        cmp eax, ebx
        ; Exact mapped bytes 77 05: ja 0x587c5327
        __asm _emit 0x77
        __asm _emit 0x05
        ; Exact mapped bytes E8 97 C1 1A 00: call 0x589714be
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc1
        __asm _emit 0x1a
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 86 80 00 00 00: jbe 0x587c53af
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [esi + 14h]
        add edi, ebx
        cmp edi, -2
        ; Exact mapped bytes 76 05: jbe 0x587c533f
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 7F C1 1A 00: call 0x589714be
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc1
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 18h]
        cmp eax, edi
        ; Exact mapped bytes 73 39: jae 0x587c537f
        __asm _emit 0x73
        __asm _emit 0x39
        mov ecx, dword ptr [esi + 14h]
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 8E FA F6 FF: call 0x58734de0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfa
        __asm _emit 0xf6
        __asm _emit 0xff
        test edi, edi
        ; Exact mapped bytes 76 58: jbe 0x587c53ae
        __asm _emit 0x76
        __asm _emit 0x58
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esi + 14h]
        push edx
        push ebx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 19 F6 FF FF: call 0x587c4980
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 18h], 10h
        mov dword ptr [esi + 14h], edi
        ; Exact mapped bytes 72 37: jb 0x587c53a7
        __asm _emit 0x72
        __asm _emit 0x37
        mov eax, dword ptr [esi + 4]
        mov byte ptr [eax + edi], 0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 75 D1: jne 0x587c5354
        __asm _emit 0x75
        __asm _emit 0xd1
        mov dword ptr [esi + 14h], edi
        cmp eax, 10h
        ; Exact mapped bytes 72 0E: jb 0x587c5399
        __asm _emit 0x72
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 4]
        pop edi
        mov byte ptr [eax], 0
        mov eax, esi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [esi + 4]
        pop edi
        mov byte ptr [eax], 0
        mov eax, esi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [esi + 4]
        mov byte ptr [eax + edi], 0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
