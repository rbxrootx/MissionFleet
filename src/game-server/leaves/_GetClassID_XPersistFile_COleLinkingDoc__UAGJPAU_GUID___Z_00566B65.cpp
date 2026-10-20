// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00566B65 .. +0x8E bytes.
extern "C" __declspec(naked) void _GetClassID_XPersistFile_COleLinkingDoc__UAGJPAU_GUID___Z_00566B65() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0a4h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 75 2B: jne 0x566bab
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes A1 30 E5 58 00: mov eax, dword ptr [0x58e530]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [edx], eax
        ; Exact mapped bytes 8B 0D 34 E5 58 00: mov ecx, dword ptr [0x58e534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes A1 38 E5 58 00: mov eax, dword ptr [0x58e538]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes 8B 0D 3C E5 58 00: mov ecx, dword ptr [0x58e53c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [edx + 0ch], ecx
        mov eax, 80004005h
        ; Exact mapped bytes EB 42: jmp 0x566bed
        __asm _emit 0xeb
        __asm _emit 0x42
        push 1e9h
        push 5d0c78h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        push eax
        ; Exact mapped bytes E8 9C 45 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 7D 59 FE FF: call 0x54c54f
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
