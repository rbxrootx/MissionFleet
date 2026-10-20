// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562EF3 .. +0x57 bytes.
extern "C" __declspec(naked) void _OnNext_CEnumFormatEtc__MAEHPAX_Z_00562EF3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2C E3 FF FF: call 0x561234
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x562f10
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 34: jmp 0x562f44
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 20: je 0x562f3f
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 C3 C2 FE FF: call 0x54f1ee
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 05: jne 0x562f3f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 6D CE F6 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xce
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
