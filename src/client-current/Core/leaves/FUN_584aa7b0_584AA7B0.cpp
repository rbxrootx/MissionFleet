// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA7B0 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_584aa7b0_584AA7B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx]
        mov byte ptr [ebp - 1], al
        add dword ptr [ebp - 8], 1
        cmp byte ptr [ebp - 1], 0
        ; Exact mapped bytes 75 ED: jne 0x584aa7c5
        __asm _emit 0x75
        __asm _emit 0xed
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ret
    }
}
