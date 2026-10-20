// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B8430 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_586b8430_586B8430() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 7878787h
        cmp dword ptr [ebp + 8], 7878787h
        ; Exact mapped bytes 76 06: jbe 0x586b8450
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 21 FB DC FF: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfb
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        imul eax, dword ptr [ebp + 8], 22h
        mov esp, ebp
        pop ebp
        ret
    }
}
