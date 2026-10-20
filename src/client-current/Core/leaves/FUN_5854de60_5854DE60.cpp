// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854DE60 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_5854de60_5854DE60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8F 53 F5 FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x53
        __asm _emit 0xf5
        __asm _emit 0xff
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 09: jne 0x5854de80
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x5854de87
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
