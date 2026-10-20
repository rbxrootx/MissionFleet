// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049807B .. +0x5C bytes.
extern "C" __declspec(naked) void _QueryInterface_XPropertyNotifySink_COleControlSite__UAGJABU_GUID__PAPAX_Z_0049807B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d4h
        mov dword ptr [ebp - 4], eax
        push 58e540h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 48 57 FF FF: call 0x48d7e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x4980b4
        __asm _emit 0x75
        __asm _emit 0x15
        push 58e400h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 33 57 FF FF: call 0x48d7e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x4980cc
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x4980d1
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
