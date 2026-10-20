// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052504D .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_0052504d_0052504D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 0D: jne 0x52506c
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 57 F1 FF FF: call 0x5241be
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 1ch]
        ; Exact mapped bytes EB 26: jmp 0x525092
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 81 EE 00 00: call 0x533ef5
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 3d3h
        push 5c8174h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 D6 60 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A4 65 FB FF: call 0x4db636
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x65
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
