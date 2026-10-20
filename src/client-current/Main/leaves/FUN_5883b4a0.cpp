// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B4A0 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_5883b4a0() {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, dword ptr [ecx + 22ch]
        push ebp
        push esi
        lea esi, [ecx + 21ch]
        push edi
        cmp dword ptr [esi + 0ch], ebx
        ; Exact mapped bytes 76 05: jbe 0x5883b4bd
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 B5 17 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x17
        __asm _emit 0x14
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0ch]
        mov ebp, dword ptr [esi]
        cmp edi, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 05: jbe 0x5883b4cc
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 A6 17 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x17
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push ebx
        push ebp
        push edi
        push eax
        lea eax, [esp + 20h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D2 38 F7 FF: call 0x587aedb0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x38
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D A4 B4 A0 58: mov ecx, dword ptr [0x58a0b4a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 EE 89 F1 FF: call 0x58753ee0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x89
        __asm _emit 0xf1
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}
