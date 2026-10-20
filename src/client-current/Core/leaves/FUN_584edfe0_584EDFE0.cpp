// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EDFE0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_584edfe0_584EDFE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 17: je 0x584ee01c
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 A2 92 F9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 FE FF FF: call 0x584edee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x584ee043
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 8B 92 F9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D 00 00 00: call 0x584ee0c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
