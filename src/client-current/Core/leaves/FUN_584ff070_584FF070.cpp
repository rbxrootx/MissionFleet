// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FF070 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_584ff070_584FF070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 52: je 0x584ff0d1
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 258h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20ch]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EE 6E F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 210h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D8 6E F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 214h]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C2 6E F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x584ff0e7
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 258h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A E5 FF FF: call 0x584fd600
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
