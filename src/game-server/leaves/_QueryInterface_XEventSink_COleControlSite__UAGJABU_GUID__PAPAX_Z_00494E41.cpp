// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00494E41 .. +0x73 bytes.
extern "C" __declspec(naked) void _QueryInterface_XEventSink_COleControlSite__UAGJABU_GUID__PAPAX_Z_00494E41() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0cch
        mov dword ptr [ebp - 4], eax
        push 58e540h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 82 89 FF FF: call 0x48d7e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 2C: jne 0x494e91
        __asm _emit 0x75
        __asm _emit 0x2c
        push 58d5d0h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 6D 89 FF FF: call 0x48d7e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x494e91
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        add eax, 3ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 56 89 FF FF: call 0x48d7e0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x494ea9
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x494eae
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 80004002h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
