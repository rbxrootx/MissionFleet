// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052A414 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_0052a414_0052A414() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 37 01 00: call 0x53db2b
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 15: je 0x52a445
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
