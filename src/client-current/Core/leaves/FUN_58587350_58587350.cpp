// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58587350 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_58587350_58587350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 58h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58587374
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 58h]
        ; Exact mapped bytes 7D 1D: jge 0x5858739c
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 47 EB EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xeb
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CF: jmp 0x5858736b
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
