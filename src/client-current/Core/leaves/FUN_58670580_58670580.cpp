// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58670580 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_58670580_58670580() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 8], ecx
        push 406h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 11 51 14 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x51
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8E F2 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf2
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0d4h], 3
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0dch], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 61 F2 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf2
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4B F2 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf2
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 FC FF FF: call 0x58670230
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
