// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A7B90 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_584a7b90_584A7B90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0dch], 0ah
        ; Exact mapped bytes 7C 35: jl 0x584a7bd8
        __asm _emit 0x7c
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0e0h
        ; Exact mapped bytes E8 5F 00 00 00: call 0x584a7c10
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 76 23: jbe 0x584a7bd8
        __asm _emit 0x76
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 FB FF FF: call 0x584a7760
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0e0h
        ; Exact mapped bytes E8 25 05 FE FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0dch], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0dch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0dch], 1869fh
        ; Exact mapped bytes 7E 0D: jle 0x584a7c09
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0dch], 1
        mov esp, ebp
        pop ebp
        ret
    }
}
