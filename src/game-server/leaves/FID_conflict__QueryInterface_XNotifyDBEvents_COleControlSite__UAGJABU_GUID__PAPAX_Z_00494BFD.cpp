// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00494BFD .. +0x5C bytes.
extern "C" __declspec(naked) void FID_conflict__QueryInterface_XNotifyDBEvents_COleControlSite__UAGJABU_GUID__PAPAX_Z_00494BFD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0c8h
        mov dword ptr [ebp - 4], eax
        push 58e540h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 C6 8B FF FF: call 0x48d7e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x494c36
        __asm _emit 0x75
        __asm _emit 0x15
        push 58e450h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 B1 8B FF FF: call 0x48d7e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x494c4e
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
        ; Exact mapped bytes EB 05: jmp 0x494c53
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
