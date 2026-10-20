// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A491F .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_004a491f_004A491F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 16eh
        push 674ab0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 27 59 03 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 56 81 08 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CE FC 02 00: call 0x4d4618
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
