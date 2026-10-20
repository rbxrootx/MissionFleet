// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FD91E .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_004fd91e_004FD91E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE 4E FD FF: call 0x4d2823
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4fd940
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 1C: jmp 0x4fd95c
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 111h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 51 FD FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x51
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DD DC 02 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
