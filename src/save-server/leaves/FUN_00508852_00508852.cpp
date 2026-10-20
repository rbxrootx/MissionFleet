// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508852 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_00508852_00508852() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x508874
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 2B DB 01 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 1B: jge 0x50889f
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EB 15 00 00: call 0x509e7b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x50889d
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB CC: jmp 0x50886b
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
