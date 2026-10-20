// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425400 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_00425400_00425400() {
    __asm {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 0ch]
        dec dword ptr [ecx + 4]
        ; Exact mapped bytes 78 0E: js 0x425419
        __asm _emit 0x78
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov al, byte ptr [ebp + 8]
        mov byte ptr [edx], al
        inc dword ptr [ecx]
        movzx eax, al
        ; Exact mapped bytes EB 0B: jmp 0x425424
        __asm _emit 0xeb
        __asm _emit 0x0b
        push ecx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 F7 FF FF: call 0x424ba7
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        cmp eax, -1
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 05: jne 0x425431
        __asm _emit 0x75
        __asm _emit 0x05
        or dword ptr [eax], 0ffffffffh
        pop ebp
        ret
        inc dword ptr [eax]
        pop ebp
        ret
    }
}
