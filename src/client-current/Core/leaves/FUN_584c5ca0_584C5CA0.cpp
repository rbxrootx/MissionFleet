// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C5CA0 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_584c5ca0_584C5CA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        sub eax, dword ptr [ebp - 0ch]
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 77 4D: ja 0x584c5d0d
        __asm _emit 0x77
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 10h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AC 47 FE FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 05 4A FE FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov byte ptr [ebp - 1], 0
        lea eax, [ebp - 1]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 DB 48 FE FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 1E: jmp 0x584c5d2b
        __asm _emit 0xeb
        __asm _emit 0x1e
        xor edx, edx
        mov byte ptr [ebp - 2], dl
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        movzx edx, byte ptr [ebp - 2]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 65 F4 FF FF: call 0x584c5190
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
