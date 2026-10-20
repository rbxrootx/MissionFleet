// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A06B0 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_584a06b0_584A06B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F FF FF FF: call 0x584a0630
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [ebp - 4]
        add edx, dword ptr [ecx + 1ch]
        cmp eax, edx
        ; Exact mapped bytes 7F 51: jg 0x584a0722
        __asm _emit 0x7f
        __asm _emit 0x51
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 FF FF FF: call 0x584a0650
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 14h]
        cmp eax, ecx
        ; Exact mapped bytes 7C 39: jl 0x584a0722
        __asm _emit 0x7c
        __asm _emit 0x39
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F FF FF FF: call 0x584a0670
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp - 4]
        add edx, dword ptr [ecx + 20h]
        cmp eax, edx
        ; Exact mapped bytes 7F 21: jg 0x584a0722
        __asm _emit 0x7f
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 07 FF FF FF: call 0x584a0610
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 18h]
        cmp eax, ecx
        ; Exact mapped bytes 7C 09: jl 0x584a0722
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x584a0729
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
