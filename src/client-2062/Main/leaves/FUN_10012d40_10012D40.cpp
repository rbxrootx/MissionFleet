// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10012D40 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_10012d40_10012D40() {
    __asm {
        push ebx
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov ebx, ecx
        test edi, edi
        ; Exact mapped bytes 76 2E: jbe 0x10012d7a
        __asm _emit 0x76
        __asm _emit 0x2e
        mov eax, dword ptr [esp + 10h]
        push esi
        lea esi, [eax + 24h]
        mov eax, dword ptr [esi - 1ch]
        lea ecx, [esi + 9]
        push ecx
        mov ecx, dword ptr [esi - 20h]
        lea edx, [esi - 18h]
        push esi
        push edx
        mov edx, dword ptr [esi - 24h]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 F0 FC FF FF: call 0x10012a60
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, 84h
        dec edi
        ; Exact mapped bytes 75 DB: jne 0x10012d54
        __asm _emit 0x75
        __asm _emit 0xdb
        pop esi
        pop edi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
