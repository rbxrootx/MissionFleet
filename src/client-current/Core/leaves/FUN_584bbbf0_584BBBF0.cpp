// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BBBF0 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_584bbbf0_584BBBF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584bbc0b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 64: jae 0x584bbc77
        __asm _emit 0x73
        __asm _emit 0x64
        imul edx, dword ptr [ebp - 4], 84h
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 2dh]
        push ecx
        imul edx, dword ptr [ebp - 4], 84h
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 24h]
        push ecx
        imul edx, dword ptr [ebp - 4], 84h
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 0ch]
        push ecx
        imul edx, dword ptr [ebp - 4], 84h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + edx + 8]
        push ecx
        imul edx, dword ptr [ebp - 4], 84h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + edx + 4]
        push ecx
        imul edx, dword ptr [ebp - 4], 84h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + edx]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FC FB FF FF: call 0x584bb870
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8B: jmp 0x584bbc02
        __asm _emit 0xeb
        __asm _emit 0x8b
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
