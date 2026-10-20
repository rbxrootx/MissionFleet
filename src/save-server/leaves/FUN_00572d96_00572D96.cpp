// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00572D96 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_00572d96_00572D96() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 1bch
        push 67cd14h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 AE 74 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x74
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 48 E7 FB FF: call 0x531502
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xe7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x572dc7
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1E: jmp 0x572de5
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 2
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC 1F FB FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x1f
        __asm _emit 0xfb
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        inc eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
