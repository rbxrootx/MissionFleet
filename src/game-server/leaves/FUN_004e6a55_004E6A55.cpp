// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E6A55 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_004e6a55_004E6A55() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3E FE FF FF: call 0x4e68ac
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1
        mov dword ptr [ebp + 10h], eax
        test edx, edx
        ; Exact mapped bytes 74 26: je 0x4e6aa4
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A4 6F 00 00: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB CA: jmp 0x4e6a6e
        __asm _emit 0xeb
        __asm _emit 0xca
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
