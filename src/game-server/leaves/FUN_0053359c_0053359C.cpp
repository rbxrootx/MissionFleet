// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053359C .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0053359c_0053359C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        push 1
        push 0ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 9B C8 F9 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc8
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5335d3
        __asm _emit 0x75
        __asm _emit 0x14
        push 19dh
        push 5820dch
        ; Exact mapped bytes E8 32 14 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5335d3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5335ae
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
