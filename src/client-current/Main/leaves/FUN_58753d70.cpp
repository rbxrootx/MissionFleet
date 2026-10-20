// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58753D70 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_58753d70() {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 8]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 10h]
        mov byte ptr [esp + 8], 0
        mov eax, dword ptr [esp + 8]
        push eax
        mov eax, dword ptr [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 10h]
        push edx
        push eax
        push ecx
        add eax, 48h
        push eax
        ; Exact mapped bytes E8 85 F6 FF FF: call 0x58753420
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add dword ptr [esi + 10h], -48h
        mov eax, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 28h]
        mov ecx, dword ptr [esi + 10h]
        add esp, 18h
        mov dword ptr [edi], 0
        cmp dword ptr [esi + 0ch], eax
        ; Exact mapped bytes 77 04: ja 0x58753dbc
        __asm _emit 0x77
        __asm _emit 0x04
        cmp eax, ecx
        ; Exact mapped bytes 76 09: jbe 0x58753dc5
        __asm _emit 0x76
        __asm _emit 0x09
        ; Exact mapped bytes E8 B1 8E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8e
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esi]
        mov dword ptr [edi + 4], eax
        mov dword ptr [edi], edx
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
