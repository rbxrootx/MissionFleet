// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BBC80 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_584bbc80_584BBC80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584bbc9b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 52: jae 0x584bbcf5
        __asm _emit 0x73
        __asm _emit 0x52
        imul edx, dword ptr [ebp - 4], 54h
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 2dh]
        push ecx
        imul edx, dword ptr [ebp - 4], 54h
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 24h]
        push ecx
        imul edx, dword ptr [ebp - 4], 54h
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 0ch]
        push ecx
        imul edx, dword ptr [ebp - 4], 54h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + edx + 8]
        push ecx
        imul edx, dword ptr [ebp - 4], 54h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + edx + 4]
        push ecx
        imul edx, dword ptr [ebp - 4], 54h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + edx]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7E FB FF FF: call 0x584bb870
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 9D: jmp 0x584bbc92
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
