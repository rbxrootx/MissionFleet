// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042413A .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_0042413a_0042413A() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, 44b018h
        push esi
        mov ecx, edx
        cmp eax, dword ptr [ecx + 10h]
        ; Exact mapped bytes 76 05: jbe 0x424150
        __asm _emit 0x76
        __asm _emit 0x05
        cmp eax, dword ptr [ecx + 14h]
        ; Exact mapped bytes 72 08: jb 0x424158
        __asm _emit 0x72
        __asm _emit 0x08
        mov ecx, dword ptr [ecx]
        cmp ecx, edx
        ; Exact mapped bytes 74 37: je 0x42418d
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes EB EE: jmp 0x424146
        __asm _emit 0xeb
        __asm _emit 0xee
        test al, 0fh
        ; Exact mapped bytes 75 31: jne 0x42418d
        __asm _emit 0x75
        __asm _emit 0x31
        mov esi, eax
        mov edx, 100h
        and esi, 0fffh
        cmp esi, edx
        ; Exact mapped bytes 72 20: jb 0x42418d
        __asm _emit 0x72
        __asm _emit 0x20
        mov esi, dword ptr [esp + 0ch]
        mov dword ptr [esi], ecx
        mov esi, dword ptr [esp + 10h]
        mov ecx, eax
        ; Exact mapped bytes 66 81 E1 00 F0: and cx, 0xf000
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0xf0
        sub eax, ecx
        mov dword ptr [esi], ecx
        sub eax, edx
        pop esi
        sar eax, 4
        lea eax, [eax + ecx + 8]
        ret
        xor eax, eax
        pop esi
        ret
    }
}
