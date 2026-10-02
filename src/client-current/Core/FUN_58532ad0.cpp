// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58532AD0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_58532ad0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 98h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a4h], 40000000h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 9ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], 1
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 121c0h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B7 33 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x33
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 121c0h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 98 33 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x33
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
