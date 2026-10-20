// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F5198 .. +0x69 bytes.
extern "C" __declspec(naked) void _EnableScrollBarCtrl_CWnd__QAEXHH_Z_004F5198() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 75 1E: jne 0x4f51c5
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E3 FF FF FF: call 0x4f5198
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D5 FF FF FF: call 0x4f5198
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 36: jmp 0x4f51fb
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x4f51eb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 A2 FF FF: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 10: jmp 0x4f51fb
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 7B 04 00: call 0x53cd77
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
