// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00494DCC .. +0x60 bytes.
extern "C" __declspec(naked) void _OnRequestEdit_XPropertyNotifySink_COleControlSite__UAGJJ_Z_00494DCC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov eax, dword ptr [ebp + 8]
        sub eax, 0c8h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 74 04: je 0x494ded
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 39: jmp 0x494e26
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 75 2B: jne 0x494e24
        __asm _emit 0x75
        __asm _emit 0x2b
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 1
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 C3 3E 00 00: call 0x498cd0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 E3 FF FF: call 0x4931f2
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 05: je 0x494e24
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes EB 02: jmp 0x494e26
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
