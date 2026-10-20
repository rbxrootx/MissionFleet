// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00509DBD .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_00509dbd_00509DBD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x509dd8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ch
        ; Exact mapped bytes E8 C7 C5 01 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 25: jge 0x509e0d
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 1B: je 0x509e0b
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ch
        ; Exact mapped bytes E8 2E C7 01 00: call 0x52652d
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x509e0b
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 05: jmp 0x509e10
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB C2: jmp 0x509dcf
        __asm _emit 0xeb
        __asm _emit 0xc2
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
