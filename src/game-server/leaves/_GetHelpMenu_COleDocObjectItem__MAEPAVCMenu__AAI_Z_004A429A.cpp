// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A429A .. +0x45 bytes.
extern "C" __declspec(naked) void _GetHelpMenu_COleDocObjectItem__MAEPAVCMenu__AAI_Z_004A429A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 47 0B 05 00: call 0x4f4df5
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 44h]
        push edx
        ; Exact mapped bytes E8 9C 73 05 00: call 0x4fb659
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 10: je 0x4a42d6
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B 70 09 00: call 0x53b349
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        sub eax, 1
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
